DROP TABLE IF EXISTS monitoring_snapshots;
DROP TABLE IF EXISTS monitoring_servers;

CREATE TABLE monitoring_servers
(
  ID TINYINT UNSIGNED NOT NULL AUTO_INCREMENT,
  Name VARCHAR(45) NOT NULL,
  PRIMARY KEY(ID)
);

CREATE TABLE monitoring_snapshots 
(
    ID INT UNSIGNED NOT NULL AUTO_INCREMENT,
    monitoring_servers_ID TINYINT UNSIGNED NOT NULL,
    MainLoopTicks INT UNSIGNED NOT NULL,
    PlayerCount TINYINT UNSIGNED NOT NULL,
    DMCount TINYINT UNSIGNED NOT NULL,
    TimeStamp TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
    PRIMARY KEY(ID),
    FOREIGN KEY(monitoring_servers_ID) REFERENCES monitoring_servers(ID),
    INDEX monitoring_snapshots_FKIndex1(monitoring_servers_ID)
);